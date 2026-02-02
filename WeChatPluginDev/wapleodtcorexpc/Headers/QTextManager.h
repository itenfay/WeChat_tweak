//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, QMapContext;

@interface QTextManager : NSObject
{
    QMapContext *_mapContext;
}

- (void).cxx_destruct;
@property(nonatomic) __weak QMapContext *mapContext; // @synthesize mapContext=_mapContext;
- (void)textChanged:(id)arg1;
- (void)updateText:(id)arg1;
- (void)removeText:(id)arg1;
- (void)addText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

