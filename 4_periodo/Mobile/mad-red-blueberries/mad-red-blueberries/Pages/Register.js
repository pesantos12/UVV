import { Text, SafeAreaView, StyleSheet, View, TextInput, Button } from 'react-native';

// You can import supported modules from npm
import { Card } from 'react-native-paper';

// or any files within the Snack
import AssetExample from '../components/AssetExample';

import { useNavigation } from '@react-navigation/native';

export default function Register() {
  const navigation = useNavigation();
  return (
    <View style={styles3.geral}> 
      <Text style={styles3.titulo}> 
        Registrar-se
      </Text>
      <View>
        <TextInput style={styles3.input}
          placeholder={'Login'}
        />
        <TextInput style={styles3.input}
          placeholder={'Senha'}
        />
        <TextInput style={styles3.input}
          placeholder={'Repetir senha'}
        />
      </View>
      <Button
        title={'Salvar'}
        color={'black'}
        onPress={() => navigation.navigate('Login')}
      />
    </View>
  );
}

const styles3 = StyleSheet.create({
  geral : {
    display: 'flex',
    alignItems: 'center',
    justifyContent: 'center',
    flex: 1,
  },
  titulo: {
    fontSize: 20,
    marginBottom: 36,
  },
  input : {
    borderWidth: 1,
    marginBottom: 16,
    borderRadius: 5,
    padding: 6,
    color: 'gray',
  }
});
