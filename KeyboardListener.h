//
//  KeyboardListener.h
//  AldoCoppola
//
//  Created by Gleb Tarasov on 27.07.12.
//
//

#import <Foundation/Foundation.h>


// Следит, видна клавиатура или нет. Надо создавать только когда клавиатуры нет.
@interface KeyboardListener : NSObject

@property(nonatomic, readonly) BOOL isKeyboardVisible;

@end
