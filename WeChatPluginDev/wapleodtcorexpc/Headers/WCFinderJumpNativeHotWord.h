//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCFinderJumpNativeHotWord : NSObject
{
    unsigned int _actionType;
    NSString *_hotwordText;
    NSString *_sessionBufferString;
    NSData *_sessionBuffer;
    unsigned long long _hotwordId;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long hotwordId; // @synthesize hotwordId=_hotwordId;
@property(retain, nonatomic) NSData *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(copy, nonatomic) NSString *sessionBufferString; // @synthesize sessionBufferString=_sessionBufferString;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *hotwordText; // @synthesize hotwordText=_hotwordText;

@end

