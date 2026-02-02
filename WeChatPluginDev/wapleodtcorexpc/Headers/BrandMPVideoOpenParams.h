//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BrandMpVideoItem, CContact, CMessageWrap, NSData, UIImage;

@interface BrandMPVideoOpenParams : NSObject
{
    CMessageWrap *_wrapMsg;
    double _videoCurrTime;
    UIImage *_currFrameImage;
    NSData *_videoThumbData;
    CContact *_contact;
    struct CGRect _originRect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSData *videoThumbData; // @synthesize videoThumbData=_videoThumbData;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
@property(retain, nonatomic) UIImage *currFrameImage; // @synthesize currFrameImage=_currFrameImage;
@property(nonatomic) double videoCurrTime; // @synthesize videoCurrTime=_videoCurrTime;
- (id)description;
- (id)genEmptyMpVideoMsg;
@property(readonly, nonatomic) CMessageWrap *wrapMsg; // @synthesize wrapMsg=_wrapMsg;
@property(readonly, nonatomic) BrandMpVideoItem *videoItem;
- (id)initWithWCDataItem:(id)arg1;
- (id)initWithFavData:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

