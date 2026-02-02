//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterError, NSDictionary, NSString;

@interface NativeKeyboardViewParam : NSObject
{
    NSString *_viewType;
    long long _viewId;
    NSDictionary *_config;
    FlutterError *_error;
}

- (void).cxx_destruct;
@property(nonatomic) FlutterError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(nonatomic) long long viewId; // @synthesize viewId=_viewId;
@property(retain, nonatomic) NSString *viewType; // @synthesize viewType=_viewType;

@end

