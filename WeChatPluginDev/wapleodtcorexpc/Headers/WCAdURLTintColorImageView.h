//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class NSString;

@interface WCAdURLTintColorImageView : UIImageView
{
    _Bool _useCdn;
    unsigned int _downloadScene;
    NSString *_url;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useCdn; // @synthesize useCdn=_useCdn;
@property(nonatomic) unsigned int downloadScene; // @synthesize downloadScene=_downloadScene;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)updateImageContent;
- (id)fetchImageForUrl:(id)arg1;
- (void)setImageWithUrl:(id)arg1 tintColor:(id)arg2 scene:(unsigned int)arg3 useCdn:(_Bool)arg4;
- (void)setImageWithUrl:(id)arg1 tintColor:(id)arg2;
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

