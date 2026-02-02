//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLivePkTaskedBonusTaskItem, NSAttributedString;

@interface MMFinderLivePkTaskedBonusProgressDescriptionItem : NSObject
{
    MMFinderLivePkTaskedBonusTaskItem *_taskItem;
    double _progress;
    NSAttributedString *_progressDescription;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *progressDescription; // @synthesize progressDescription=_progressDescription;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) MMFinderLivePkTaskedBonusTaskItem *taskItem; // @synthesize taskItem=_taskItem;

@end

