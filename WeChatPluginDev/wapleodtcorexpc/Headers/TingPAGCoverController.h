//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, PAGFile, TingCoverInfo, TingPAGImageView, UIColor;
@protocol TingPAGCoverControllerDelegate;

@interface TingPAGCoverController : NSObject
{
    id <TingPAGCoverControllerDelegate> _delegate;
    TingCoverInfo *_coverInfo;
    UIColor *_oCoverBgColor;
    PAGFile *_tmplFile;
    NSMutableArray *_arrCoverUrl;
    TingPAGImageView *_bindPagPlayer;
}

+ (void)applyPAGImage:(id)arg1 forIndex:(unsigned long long)arg2 tmpl:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak TingPAGImageView *bindPagPlayer; // @synthesize bindPagPlayer=_bindPagPlayer;
@property(retain, nonatomic) NSMutableArray *arrCoverUrl; // @synthesize arrCoverUrl=_arrCoverUrl;
@property(retain, nonatomic) PAGFile *tmplFile; // @synthesize tmplFile=_tmplFile;
@property(retain, nonatomic) UIColor *oCoverBgColor; // @synthesize oCoverBgColor=_oCoverBgColor;
@property(retain, nonatomic) TingCoverInfo *coverInfo; // @synthesize coverInfo=_coverInfo;
@property(nonatomic) __weak id <TingPAGCoverControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)pagFilePathFromCoverInfo:(id)arg1;
- (id)pagFileFromCoverInfo:(id)arg1;
- (void)freeCache;
- (void)flush;
- (void)onFetchImage:(id)arg1 indexes:(id)arg2 url:(id)arg3;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)starRequestTmplCoverUrls;
- (void)resetDefaultImages;
- (void)unbindPAGView;
- (void)bindPAGView:(id)arg1;
- (void)updateCoverInfo:(id)arg1;
- (id)initWithCoverInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

