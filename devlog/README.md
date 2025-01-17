### About

Это карта разработки нашего проекта, то есть документ, содержащий список заданий и их детальную проработку.

<hr></hr>

### Development log

Лог разработки на данный момент:
1. _Лена_

- [ ] Создание математической модели движения самолета в двумерном пространстве

2. _Сережа_

- [ ] Описание модели управления точкой на экране с помощью нажатия кнопкой мыши 
- [ ] Реализация модели с использованием SFML

3. _Анфиса_
   
- [ ] Получение ответа от запроса к https://www.weatherapi.com в формате JSON
- [ ] Парсинг запроса формата JSON
- [ ] Создание набора данных о погоде из JSON документа (структуры данных по типу `std::map`, `std::vector`, ...)
  
4. _Вера_

- [ ] Получение ответа от запроса к https://aviationstack.com в формате JSON
- [ ] Парсинг запроса формата JSON
- [ ] Создание набора данных о рейсах из JSON документа (структуры данных по типу `std::map`, `std::vector`, ...)
  
5. _Илья_

- [x] Создание примитивного окна с использованием SFML
- [x] Добавление спрайта на полотно окна
- [x] Удаление спрайта с полотна окна 
- [x] Создание прототипа GUI с использованием TGUI
- [x] Добавление кнопок `Program`, `Debug`, `Info` и их функционала
- [x] Добавление файла `CMakeLists.txt`
- [x] Добавление сборки и под macOS, и под Windows
- [x] Разделение проекта на классы
- [ ] Создание интерфейсной сетки
- [ ] Заполнение интерфейсной сетки
- [ ] Добавление карты 
- [x] Добавление FPS счетчика  
- [x] Добавление ветки *debug* 
   
1. _Катя_

- [ ] Создание класса `LogManager` (конструкторы, деструкторы, геттеры, сеттеры, ...)
- [ ] Реализация базовых методов записи в файл в определенном формате (условимся, что формат будет в виде `hh:mm:ss - action`)