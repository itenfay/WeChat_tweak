//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPushLiteAppOptionalParams : NSObject
{
    NSString *_feedId;
    unsigned long long _tagType;
    NSString *_tagSecKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tagSecKey; // @synthesize tagSecKey=_tagSecKey;
@property(nonatomic) unsigned long long tagType; // @synthesize tagType=_tagType;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;

@end

