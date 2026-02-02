//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveKSKitMusicNote;

@interface MMFinderLiveKSKitMusicNoteHitLine : UIView
{
    MMFinderLiveKSKitMusicNote *_rootMusicNote;
    struct _NSRange _hitRange;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange hitRange; // @synthesize hitRange=_hitRange;
@property(nonatomic) __weak MMFinderLiveKSKitMusicNote *rootMusicNote; // @synthesize rootMusicNote=_rootMusicNote;
- (void)updateSelfLeftAndWidth;
- (_Bool)checkHitRangeIsContinuous:(struct _NSRange)arg1;
- (_Bool)addHitRange:(struct _NSRange)arg1;
- (id)initWithRootMusicNote:(id)arg1;

@end

