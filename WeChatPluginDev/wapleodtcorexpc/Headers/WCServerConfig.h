//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class SnsServerConfig;

@interface WCServerConfig : NSObject
{
    unsigned int _postMentionLimit;
    unsigned int _postTogetherLimit;
    unsigned int _pasteLengthLimit;
    int _tiger2022PostStatus;
    int _tiger2022SourceStatus;
    int _firstPageCount;
    int _nextPageCount;
    SnsServerConfig *_pbServerConfig;
}

- (void).cxx_destruct;
@property(nonatomic) int nextPageCount; // @synthesize nextPageCount=_nextPageCount;
@property(nonatomic) int firstPageCount; // @synthesize firstPageCount=_firstPageCount;
@property(nonatomic) int tiger2022SourceStatus; // @synthesize tiger2022SourceStatus=_tiger2022SourceStatus;
@property(nonatomic) int tiger2022PostStatus; // @synthesize tiger2022PostStatus=_tiger2022PostStatus;
@property(nonatomic) unsigned int pasteLengthLimit; // @synthesize pasteLengthLimit=_pasteLengthLimit;
@property(nonatomic) unsigned int postTogetherLimit; // @synthesize postTogetherLimit=_postTogetherLimit;
@property(nonatomic) unsigned int postMentionLimit; // @synthesize postMentionLimit=_postMentionLimit;
@property(readonly, nonatomic) SnsServerConfig *pbServerConfig; // @synthesize pbServerConfig=_pbServerConfig;
- (id)initWithPbObject:(id)arg1;
- (id)init;

@end

