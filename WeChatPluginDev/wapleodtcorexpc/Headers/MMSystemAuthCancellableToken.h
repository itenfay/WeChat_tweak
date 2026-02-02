//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMPageSheetBaseView;

@interface MMSystemAuthCancellableToken : NSObject
{
    _Bool _isCancelled;
    _Bool _isCompleted;
    MMPageSheetBaseView *_sheetView;
}

+ (id)CompletedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak MMPageSheetBaseView *sheetView; // @synthesize sheetView=_sheetView;
@property(nonatomic) _Bool isCompleted; // @synthesize isCompleted=_isCompleted;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (void)cancel;

@end

