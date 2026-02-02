//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WxSmStorage : NSObject
{
    CDStruct_088880ef baseCtx;
    int gErrorCode;
}

- (_Bool)clearWxAllValue;
- (_Bool)clearWxValue:(id)arg1;
- (_Bool)hasWxValue:(id)arg1;
- (id)getWxValue:(id)arg1;
- (_Bool)setWxValue:(id)arg1 value:(id)arg2;
- (id)initWithRootPath:(id)arg1 deviceId:(id)arg2 businessId:(id)arg3 userId:(id)arg4;

@end

