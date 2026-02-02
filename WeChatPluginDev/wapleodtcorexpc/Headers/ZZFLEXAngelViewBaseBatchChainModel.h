//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIScrollView, ZZFLEXSectionModel;
@protocol ZZFLEXViewModelDelegate;

@interface ZZFLEXAngelViewBaseBatchChainModel : NSObject
{
    _Bool _xib;
    id <ZZFLEXViewModelDelegate> _vmDelegate;
    UIScrollView *_hostView;
    Class _viewClass;
    NSMutableArray *_listData;
    NSMutableArray *_viewModelArray;
    ZZFLEXSectionModel *_sectionModel;
    id _itemsDelegate;
    NSString *_itemReuseIdentifier;
    CDUnknownBlockType _itemsEventAction;
    CDUnknownBlockType _itemsSelectedAction;
    CDUnknownBlockType _itemsConfigAction;
    long long _tag;
    struct CGSize _itemViewSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize itemViewSize; // @synthesize itemViewSize=_itemViewSize;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(copy, nonatomic) CDUnknownBlockType itemsConfigAction; // @synthesize itemsConfigAction=_itemsConfigAction;
@property(copy, nonatomic) CDUnknownBlockType itemsSelectedAction; // @synthesize itemsSelectedAction=_itemsSelectedAction;
@property(copy, nonatomic) CDUnknownBlockType itemsEventAction; // @synthesize itemsEventAction=_itemsEventAction;
@property(retain, nonatomic) NSString *itemReuseIdentifier; // @synthesize itemReuseIdentifier=_itemReuseIdentifier;
@property(nonatomic) __weak id itemsDelegate; // @synthesize itemsDelegate=_itemsDelegate;
@property(retain, nonatomic) ZZFLEXSectionModel *sectionModel; // @synthesize sectionModel=_sectionModel;
@property(retain, nonatomic) NSMutableArray *viewModelArray; // @synthesize viewModelArray=_viewModelArray;
@property(retain, nonatomic) NSMutableArray *listData; // @synthesize listData=_listData;
@property(nonatomic) Class viewClass; // @synthesize viewClass=_viewClass;
@property(readonly, nonatomic) _Bool xib; // @synthesize xib=_xib;
@property(readonly, nonatomic) __weak UIScrollView *hostView; // @synthesize hostView=_hostView;
@property(readonly, nonatomic) __weak id <ZZFLEXViewModelDelegate> vmDelegate; // @synthesize vmDelegate=_vmDelegate;
- (void)setItemConfigAction:(CDUnknownBlockType)arg1;
- (void)registerCellIfNeed;
- (CDUnknownBlockType)viewHeight;
- (CDUnknownBlockType)viewSize;
- (CDUnknownBlockType)viewTag;
- (CDUnknownBlockType)configAction;
- (CDUnknownBlockType)selectedAction;
- (CDUnknownBlockType)eventAction;
- (CDUnknownBlockType)delegate;
- (CDUnknownBlockType)reuseIdentifier;
- (CDUnknownBlockType)withDataModelArray;
- (CDUnknownBlockType)toSection;
- (id)initWithHostView:(id)arg1 viewClass:(Class)arg2 vmDelegate:(id)arg3 listData:(id)arg4 xib:(_Bool)arg5;

@end

