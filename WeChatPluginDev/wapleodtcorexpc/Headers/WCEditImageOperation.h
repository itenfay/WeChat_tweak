//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCEditImageOperation : NSObject
{
    CDUnknownBlockType _undoBlock;
    CDUnknownBlockType _redoBlock;
    unsigned long long _operationType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long operationType; // @synthesize operationType=_operationType;
@property(copy, nonatomic) CDUnknownBlockType redoBlock; // @synthesize redoBlock=_redoBlock;
@property(copy, nonatomic) CDUnknownBlockType undoBlock; // @synthesize undoBlock=_undoBlock;
- (void)redo;
- (void)undo;

@end

