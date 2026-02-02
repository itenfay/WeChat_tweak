//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class UIImage, WCFinderFeedMediaWrap;
@protocol WCFinderFeedImageCDNViewDelegate;

@interface WCFinderFeedImageCDNView : UIImageView
{
    id <WCFinderFeedImageCDNViewDelegate> _delegate;
    UIImage *_defaultImage;
    WCFinderFeedMediaWrap *_currentMediaWrap;
    unsigned long long _downloadFlag;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long downloadFlag; // @synthesize downloadFlag=_downloadFlag;
@property(retain, nonatomic) WCFinderFeedMediaWrap *currentMediaWrap; // @synthesize currentMediaWrap=_currentMediaWrap;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(nonatomic) __weak id <WCFinderFeedImageCDNViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)downloadFinished:(double)arg1;
- (void)updateImage:(id)arg1;
- (void)reloadImage;
- (void)updateImageWithMediaWrap:(id)arg1 downloadFlag:(unsigned long long)arg2 isPriority:(_Bool)arg3;
- (void)prepareForReuse;

@end

