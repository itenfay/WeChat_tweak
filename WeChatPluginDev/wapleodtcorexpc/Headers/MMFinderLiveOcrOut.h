//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface MMFinderLiveOcrOut : NSObject
{
    NSData *_result;
    id _userInfo;
}

+ (id)buildOutputWithData:(id)arg1 userInfo:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSData *result; // @synthesize result=_result;

@end

