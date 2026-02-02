//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSPointerArray;

@interface WCFinderListLoadingStateModel : NSObject
{
    _Bool _loadingDown;
    _Bool _loadingUp;
    _Bool _continueFlagDown;
    _Bool _continueFlagUp;
    _Bool _loadingFailDown;
    _Bool _loadingFailUp;
    NSPointerArray *_observers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSPointerArray *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool loadingFailUp; // @synthesize loadingFailUp=_loadingFailUp;
@property(nonatomic) _Bool loadingFailDown; // @synthesize loadingFailDown=_loadingFailDown;
@property(nonatomic) _Bool continueFlagUp; // @synthesize continueFlagUp=_continueFlagUp;
@property(nonatomic) _Bool continueFlagDown; // @synthesize continueFlagDown=_continueFlagDown;
@property(nonatomic) _Bool loadingUp; // @synthesize loadingUp=_loadingUp;
@property(nonatomic) _Bool loadingDown; // @synthesize loadingDown=_loadingDown;
- (_Bool)canLoadDown;
- (void)updateStreamFooterView:(id)arg1;
- (void)updateFooterViewStateWithTableView:(id)arg1 footerView:(id)arg2 dataEmpty:(_Bool)arg3;
- (void)updateEmptyUIStateWithEmptyLoadingBlock:(CDUnknownBlockType)arg1 emptyDataBlock:(CDUnknownBlockType)arg2 emptyFailBlock:(CDUnknownBlockType)arg3;
- (void)compactObservers;
- (void)_modifyObservers;
- (void)sink:(id)arg1;
- (void)modifyWithUpdater:(CDUnknownBlockType)arg1;
- (_Bool)loadingFail;
- (_Bool)loading;
- (id)init;

@end

