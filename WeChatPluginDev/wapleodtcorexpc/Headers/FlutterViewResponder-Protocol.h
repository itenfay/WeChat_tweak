//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSSet, UIEvent, UIView;

@protocol FlutterViewResponder <NSObject>
@property(retain, nonatomic) UIView *view;
- (void)touchesEstimatedPropertiesUpdated:(NSSet *)arg1;
- (void)touchesCancelled:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesEnded:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesMoved:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end

