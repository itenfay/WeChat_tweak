//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface ButtonAttachManager : NSObject
{
    NSHashTable *_attachedButtons;
    double _maxButtonWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double maxButtonWidth; // @synthesize maxButtonWidth=_maxButtonWidth;
@property(retain, nonatomic) NSHashTable *attachedButtons; // @synthesize attachedButtons=_attachedButtons;
- (void)trigger;
- (void)forceTrigger;
- (void)setNeedsTrigger;
- (void)detachButton:(id)arg1;
- (void)attachButton:(id)arg1;
- (id)init;

@end

