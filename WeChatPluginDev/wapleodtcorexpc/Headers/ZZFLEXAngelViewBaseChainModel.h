//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, UIScrollView, ZZFLEXViewModel;

@interface ZZFLEXAngelViewBaseChainModel : NSObject
{
    _Bool _xib;
    long long _type;
    UIScrollView *_hostView;
    NSMutableArray *_listData;
    ZZFLEXViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ZZFLEXViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSMutableArray *listData; // @synthesize listData=_listData;
@property(readonly, nonatomic) _Bool xib; // @synthesize xib=_xib;
@property(readonly, nonatomic) __weak UIScrollView *hostView; // @synthesize hostView=_hostView;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)registerCellIfNeed;
- (CDUnknownBlockType)viewHeight;
- (CDUnknownBlockType)viewSize;
- (CDUnknownBlockType)configAction;
- (CDUnknownBlockType)selectedAction;
- (CDUnknownBlockType)viewTag;
- (CDUnknownBlockType)eventAction;
- (CDUnknownBlockType)delegate;
- (CDUnknownBlockType)withDataModel;
- (CDUnknownBlockType)reuseIdentifier;
- (CDUnknownBlockType)toSection;
- (id)initWithHostView:(id)arg1 listData:(id)arg2 viewModel:(id)arg3 type:(long long)arg4 xib:(_Bool)arg5;

@end

