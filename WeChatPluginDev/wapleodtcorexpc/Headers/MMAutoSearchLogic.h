//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;
@protocol MMAutoSearchLogicDelegate;

@interface MMAutoSearchLogic
{
    _Bool _blockSignal;
    id <MMAutoSearchLogicDelegate> _delegate;
    NSMutableArray *_autoSearchQueue;
    NSString *_lastResponseKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastResponseKey; // @synthesize lastResponseKey=_lastResponseKey;
@property(nonatomic) _Bool blockSignal; // @synthesize blockSignal=_blockSignal;
@property(retain, nonatomic) NSMutableArray *autoSearchQueue; // @synthesize autoSearchQueue=_autoSearchQueue;
@property(nonatomic) __weak id <MMAutoSearchLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tryNextSearch;
- (_Bool)autoSearchShouldFinishedWithKeyword:(id)arg1 QueryInterval:(double)arg2 StartFromFirst:(_Bool)arg3 RequestNext:(_Bool)arg4;
- (void)tryAutoSearchWithKeyword:(id)arg1 StartFromFirst:(_Bool)arg2;
- (void)reset;
- (id)init;

@end

