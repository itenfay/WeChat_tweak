//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData, NSDictionary, NSString;

@interface _TtC6WeChat14LocalJSXHRTask : NSObject
{
    MISSING_TYPE *urlTask;
}

- (void).cxx_destruct;
- (id)init;
- (void)didFinishWithParams:(id)arg1 data:(id)arg2;
@property(nonatomic, readonly) NSDictionary *params;
@property(nonatomic, readonly) NSString *apiName;
@property(nonatomic, readonly) NSData *data;
@property(nonatomic, readonly) NSString *path;
- (id)initWithUrlTask:(id)arg1;

@end

