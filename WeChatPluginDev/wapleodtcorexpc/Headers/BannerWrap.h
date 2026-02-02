//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView;
@protocol MFBanner;

@interface BannerWrap : NSObject
{
    _Bool _editable;
    unsigned int _index;
    UIView<MFBanner> *_banner;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(retain, nonatomic) UIView<MFBanner> *banner; // @synthesize banner=_banner;

@end

