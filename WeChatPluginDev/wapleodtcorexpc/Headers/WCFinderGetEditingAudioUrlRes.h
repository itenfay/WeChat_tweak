//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderGetEditingAudioUrlRes : NSObject
{
    NSString *_audioUrl;
    NSString *_errMsg;
    long long _errCode;
}

- (void).cxx_destruct;
@property(nonatomic) long long errCode; // @synthesize errCode=_errCode;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(retain, nonatomic) NSString *audioUrl; // @synthesize audioUrl=_audioUrl;

@end

