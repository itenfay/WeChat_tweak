//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnTransInfo, NSNumber, NSString;

@interface MMLiveCdnStreamInfo : NSObject
{
    _Bool _isDisplayedStream;
    _Bool _isMainStreamInvalidFromServer;
    _Bool _hasChangedToBackStream;
    NSNumber *_streamKey;
    CdnTransInfo *_cdnTransInfo;
    NSString *_streamUrl;
}

+ (id)liveCdnStreamInfoFromUrl:(id)arg1 withKey:(id)arg2;
+ (id)liveCdnStreamInfoFromCdnTransInfo:(id)arg1 withKey:(id)arg2 andQualityTagItem:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasChangedToBackStream; // @synthesize hasChangedToBackStream=_hasChangedToBackStream;
@property(nonatomic) _Bool isMainStreamInvalidFromServer; // @synthesize isMainStreamInvalidFromServer=_isMainStreamInvalidFromServer;
@property(nonatomic) _Bool isDisplayedStream; // @synthesize isDisplayedStream=_isDisplayedStream;
@property(copy, nonatomic) NSString *streamUrl; // @synthesize streamUrl=_streamUrl;
@property(retain, nonatomic) CdnTransInfo *cdnTransInfo; // @synthesize cdnTransInfo=_cdnTransInfo;
@property(retain, nonatomic) NSNumber *streamKey; // @synthesize streamKey=_streamKey;
- (_Bool)isEqualToStreamInfo:(id)arg1;
- (_Bool)isSameLiveUrlWithStreamId:(id)arg1;
- (void)updateWithMainBlockFlag:(unsigned int)arg1;
- (id)getLiveUrl;
@property(readonly, nonatomic) _Bool hasBackUrl;
- (void)updateAndResetDataWithUrl:(id)arg1;
- (void)updateAndResetDataWithCdnTransInfo:(id)arg1 andQualityTagItem:(id)arg2;
- (void)resetAllData;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

