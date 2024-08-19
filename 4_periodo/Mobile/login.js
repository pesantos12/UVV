import React from 'react';
import { View, StyleSheet, Text, TextInput, Image, Button } from 'react-native';

import { Card } from 'react-native-paper';
import AssetExample from './components/AssetExample';

export default function App() {
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
      <Text style={styles.esqueci_senha}>
        Esqueci a senha
      </Text>
      <View style={styles.botoes}>
        <Button
          title={'Login'}
          color={'black'}
        />
        <Button
          title={'Register'}
          color={'black'}
        />
      </View>
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
  },
  esqueci_senha : {
    fontSize: 10,
    width: 170,
    marginBottom: 15,
  },
  botoes : {
    flexDirection: 'row',
    width: 170,
    justifyContent: 'space-between',
  }
});
