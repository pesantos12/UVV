import React from 'react';
import { View, StyleSheet, Text, TextInput, Image, Button } from 'react-native';

import { Card } from 'react-native-paper';
import AssetExample from '../components/AssetExample';

import { useNavigation } from '@react-navigation/native';
  

export default function Login() {
  const navigation = useNavigation();
  
  return (
    
    <View style={styles.geral}>
      <Image
      style={styles.image}
      source= {{
        uri: 'https://lncimg.lance.com.br/cdn-cgi/image/width=828,quality=75,fit=pad,format=webp/uploads/2024/07/AGIF24042722483248-scaled-aspect-ratio-512-320.jpg',
      }}
      />

      <TextInput
        style={styles.input}
        placeholder={'Login'}
      />
      <TextInput
        style={styles.input}
        placeholder={'Password'}
      />
      <View style={styles.subbotoes}>
        <Text style={styles.sbtext} onPress={() => navigation.navigate('EsqueciSenha')}>
          Esqueci a senha
        </Text>
        <Text style={styles.sbtext} onPress={() => navigation.navigate('Register')}>
          Registrar-se
        </Text>
      </View>
      <Button style={styles.botao}
        title={'Logar'}
        color={'black'}
        onPress={() => navigation.navigate('Main')}
      />
        

    </View>
)}


const styles = StyleSheet.create({
  geral : {
    display: 'flex',
    alignItems: 'center',
    justifyContent: 'center',
    flex: 1,
  },
  image : {
    height: 100,
    width: 100,
    borderRadius: 50,
  },
  input : {
    borderWidth: 1,
    padding: 5,
    width: 170,
    color: 'gray',
    marginTop: 20,
    borderRadius: 5,
  },
  sbtext : {
    fontSize: 10,
    marginBottom: 15,
  },
  botao : {
    paddingRight: 10,
    paddingLeft: 10,
  },
  subbotoes : {
    display: 'flex',
    flexDirection: 'row',
    justifyContent: 'space-between',
    width: 170,
  }
});