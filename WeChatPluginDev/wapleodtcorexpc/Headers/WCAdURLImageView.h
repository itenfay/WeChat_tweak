//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class NSString;
@protocol WCAdURLImageViewDelegate;

@interface WCAdURLImageView : UIImageView
{
    _Bool _useCdn;
    unsigned int _downloadScene;
    id <WCAdURLImageViewDelegate> _delegate;
    NSString *_url;
    NSString *_urlDark;
}

+ (_Bool)isImageForUrlExistInCache:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool useCdn; // @synthesize useCdn=_useCdn;
@property(nonatomic) unsigned int downloadScene; // @synthesize downloadScene=_downloadScene;
@property(retain, nonatomic) NSString *urlDark; // @synthesize urlDark=_urlDark;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) __weak id <WCAdURLImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)updateImageContentWithLightImage:(id)arg1 darkImage:(id)arg2;
- (void)setDefaultImageWithImageName:(id)arg1 darkImageName:(id)arg2;
- (void)setDefaultImageWithImageName:(id)arg1;
- (void)updateImageContent;
- (id)fetchImageForUrl:(id)arg1;
- (void)setImageWithUrl:(id)arg1 darkUrl:(id)arg2 scene:(unsigned int)arg3 useCdn:(_Bool)arg4;
- (void)setImageWithUrl:(id)arg1 darkUrl:(id)arg2;
- (void)setImageWithUrl:(id)arg1 scene:(unsigned int)arg2 useCdn:(_Bool)arg3;
- (void)setImageWithUrl:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

