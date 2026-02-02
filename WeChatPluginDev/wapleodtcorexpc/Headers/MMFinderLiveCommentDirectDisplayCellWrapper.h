//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveCommentPubbleCell;

@interface MMFinderLiveCommentDirectDisplayCellWrapper : NSObject
{
    _Bool _isDisplayStart;
    MMLiveCommentPubbleCell *_pubbleCell;
    double _displayTime;
    CDUnknownBlockType _dismissCallback;
    CDUnknownBlockType _tapCallback;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDisplayStart; // @synthesize isDisplayStart=_isDisplayStart;
@property(copy, nonatomic) CDUnknownBlockType tapCallback; // @synthesize tapCallback=_tapCallback;
@property(copy, nonatomic) CDUnknownBlockType dismissCallback; // @synthesize dismissCallback=_dismissCallback;
@property(nonatomic) double displayTime; // @synthesize displayTime=_displayTime;
@property(retain, nonatomic) MMLiveCommentPubbleCell *pubbleCell; // @synthesize pubbleCell=_pubbleCell;
- (void)onTapGestureRecognizer:(id)arg1;
- (void)autoDismiss;
- (void)onDisplayStart;
- (_Bool)isSupportTap;
- (void)addTapGestureIfNeed;
- (void)initDefaultDatas;
- (id)initWithCell:(id)arg1;

@end

