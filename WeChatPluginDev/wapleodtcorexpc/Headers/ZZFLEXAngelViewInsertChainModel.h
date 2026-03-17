//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class ZZFLEXSectionModel;

@interface ZZFLEXAngelViewInsertChainModel : NSObject
{
    ZZFLEXSectionModel *_sectionModel;
    long long _insertTag;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long insertTag; // @synthesize insertTag=_insertTag;
@property(retain, nonatomic) ZZFLEXSectionModel *sectionModel; // @synthesize sectionModel=_sectionModel;
- (void)p_tryInsertCell;
- (CDUnknownBlockType)afterCell;
- (CDUnknownBlockType)beforeCell;
- (CDUnknownBlockType)toIndex;
- (CDUnknownBlockType)toSection;

@end
