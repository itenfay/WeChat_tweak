//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveHotSaleInfoView, MMFinderLiveHotSaleInfosViewPlayContext, MMFinderLiveTaskId, NSDictionary;

@interface MMFinderLiveHotSaleInfosView : UIView
{
    int _scene;
    NSDictionary *_reportExtra;
    unsigned long long _productID;
    MMFinderLiveTaskId *_taskID;
    MMFinderLiveHotSaleInfosViewPlayContext *_context;
    MMFinderLiveHotSaleInfoView *_nextInfoView;
    MMFinderLiveHotSaleInfoView *_currentInfoView;
    MMFinderLiveHotSaleInfoView *_lastInfoView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveHotSaleInfoView *lastInfoView; // @synthesize lastInfoView=_lastInfoView;
@property(retain, nonatomic) MMFinderLiveHotSaleInfoView *currentInfoView; // @synthesize currentInfoView=_currentInfoView;
@property(retain, nonatomic) MMFinderLiveHotSaleInfoView *nextInfoView; // @synthesize nextInfoView=_nextInfoView;
@property(retain, nonatomic) MMFinderLiveHotSaleInfosViewPlayContext *context; // @synthesize context=_context;
@property(retain, nonatomic) MMFinderLiveTaskId *taskID; // @synthesize taskID=_taskID;
@property(nonatomic) unsigned long long productID; // @synthesize productID=_productID;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSDictionary *reportExtra; // @synthesize reportExtra=_reportExtra;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)infoHeight;
- (double)spacing;
- (double)bottomMargin;
- (void)layoutSubviews;
- (void)reportExposeIfNeeded:(id)arg1;
- (void)checkWithContext:(id)arg1;
- (void)play;
- (void)playOnce:(id)arg1;
- (_Bool)tryUseCurrentView:(id)arg1;
- (id)initWithScene:(int)arg1 productID:(unsigned long long)arg2 taskID:(id)arg3;

@end

