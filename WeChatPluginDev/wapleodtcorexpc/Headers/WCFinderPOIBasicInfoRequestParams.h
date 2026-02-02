//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPOIBasicInfoRequestParams : NSObject
{
    _Bool _isPrefetch;
    int _commentScene;
    int _fromCommentScene;
    NSString *_poiId;
    NSString *_poiName;
    NSString *_poiAddress;
    unsigned long long _fromObjectId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPrefetch; // @synthesize isPrefetch=_isPrefetch;
@property(nonatomic) int fromCommentScene; // @synthesize fromCommentScene=_fromCommentScene;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long fromObjectId; // @synthesize fromObjectId=_fromObjectId;
@property(copy, nonatomic) NSString *poiAddress; // @synthesize poiAddress=_poiAddress;
@property(copy, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(copy, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;

@end

