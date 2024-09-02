import { Text, SafeAreaView, StyleSheet, View, TextInput, Button } from 'react-native';

// You can import supported modules from npm
import { Card } from 'react-native-paper';

// or any files within the Snack
import AssetExample from '../components/AssetExample';

import { useNavigation } from '@react-navigation/native';

export default function EsqueciSenha() {
  const navigation = useNavigation();
  return (
    <View style={styles2.geral}>
      <Text style={styles2.titulo}>
        Redefinir senha
      </Text>
      <TextInput style={styles2.input}
        placeholder={'Nova senha'}
      />
      <TextInput style={styles2.input}
        placeholder={'Repetir nova senha'}
      />
      <Button
        title={'Salvar'}
        color={'black'}
        onPress={() => navigation.navigate('Login')}
      />
    </View>
  );
}

const styles2 = StyleSheet.create({
  geral : {
    display: 'flex',
    alignItems: 'center',
    justifyContent: 'center',
    flex: 1,
  },
  titulo : {
    fontSize: 20,
    marginBottom: 40,
  },
  input : {
    borderWidth: 1,
    marginBottom: 16,
    borderRadius: 5,
    padding: 6,
    color: 'gray',
  }
});
