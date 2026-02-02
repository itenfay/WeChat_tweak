//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface ZZFLEXAngelViewBatchEditChainModel : NSObject
{
    NSArray *_listData;
    long long _editType;
}

- (void).cxx_destruct;
@property(nonatomic) long long editType; // @synthesize editType=_editType;
@property(retain, nonatomic) NSArray *listData; // @synthesize listData=_listData;
- (id)dataModelArrayByViewModelArray:(id)arg1;
- (void)p_updateViewModelArray:(id)arg1;
- (id)p_deleteWithSectionModel:(id)arg1 viewModelArray:(id)arg2;
- (CDUnknownBlockType)byViewClassName;
- (CDUnknownBlockType)byDataModel;
- (CDUnknownBlockType)byViewTag;
- (CDUnknownBlockType)all;
- (id)initWithType:(long long)arg1 andListData:(id)arg2;

@end

