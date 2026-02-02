//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMicroMerchantFeedExposureInfo : NSObject
{
    _Bool _isExposured;
    _Bool _isClicked;
    unsigned int _feedCount;
    unsigned int _index;
    unsigned int _startTime;
    NSString *_foldedBlockId;
    NSString *_userName;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(nonatomic) _Bool isClicked; // @synthesize isClicked=_isClicked;
@property(nonatomic) _Bool isExposured; // @synthesize isExposured=_isExposured;
@property(nonatomic) unsigned int feedCount; // @synthesize feedCount=_feedCount;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *foldedBlockId; // @synthesize foldedBlockId=_foldedBlockId;
- (id)init;

@end

