//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCEditImageOperationMgr : NSObject
{
    NSMutableArray *_operations;
    long long _currentIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
- (void)undoOperationWithType:(unsigned long long)arg1;
- (void)redo;
- (_Bool)canRedo;
- (void)undo;
- (_Bool)canUndo;
- (void)addAnOperaion:(id)arg1;
- (id)init;

@end

