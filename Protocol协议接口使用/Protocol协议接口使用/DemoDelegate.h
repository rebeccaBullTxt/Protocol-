//
//  DemoDelegate.h
//  Protocol协议接口使用
//
//  Created by 刘渊 on 2019/10/14.
//  Copyright © 2019 刘渊. All rights reserved.
//

@protocol DemoDelegate <NSObject>
@property (nonatomic,copy) NSString *nameStr;
@optional
- (void)test;
@end
