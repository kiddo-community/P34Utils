//
//  BlockButton.h
//  SportDiary
//
//  Created by Gleb Tarasov on 27.08.12.
//  Copyright (c) 2012 Gleb Taraov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BlockButton : UIButton

- (id)initWithAction:(BasicBlock)action;
- (id)initWithButtonType:(UIButtonType)type action:(BasicBlock)action;

@property(copy, nonatomic) BasicBlock action;
@property(nonatomic) UIButtonType type;

@end
