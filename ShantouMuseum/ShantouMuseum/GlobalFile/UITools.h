//
//  UITools.h
//  SmartLift-iPhone
//
//  Created by jiahui on 14-9-25.
//  Copyright (c) 2014年 wdz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class ChannelTree;

@interface UITools : NSObject


+ (instancetype)getInstancet;

- (void)showAutoDismissAlretView:(NSString *)message Timer:(CGFloat)time;
+ (UIImage *)imageWithName:(NSString *)name andType:(NSString *)type;

+ (void)setNavigationLeftButtonTitle:(NSString *)leftBtnStr leftAction:(SEL)action rightBtnStr:(NSString *)rightBtnStr rightAction:(SEL)rightAction rightBtnSelected:(NSString *)rightBtnStateName navigationTitleStr:(NSString *)title forViewController:(UIViewController *)controller;

+ (void)navigationBackButtonTitle:(NSString *)backButtonTitle action:(SEL)action target:(UIViewController *)viewController;

#pragma UIDate
- (NSString *)pathForDocumentName:(NSString *)documentName;
- (BOOL)saveImageToFileParth:parth image:(UIImage *)image inFileName:(NSString *)fileName;
//+ (NSArray *)getFilesInDocumentPath:(NSString *)path;
+ (NSString *)getImageNameForContentImg:(NSString *)imageUrl;
+ (NSString *)getSavePathFormLeafNod:(ChannelTree *)leafNod;

@end
