//
//  ViewController.h
//  Protocol协议接口使用
//
//  Created by 刘渊 on 2019/9/28.
//  Copyright © 2019 刘渊. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SportProtocol <NSObject>
@property (nonatomic,copy) NSString *sportType;
@optional;
- (void)playFootball;
- (void)playBasketball;
- (void)run;
@end

@interface ViewController : UIViewController

@end

