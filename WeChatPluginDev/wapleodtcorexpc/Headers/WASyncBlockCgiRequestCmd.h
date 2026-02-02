//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WASyncBlockCgiRequestCmd
{
    unsigned int _blockBeginTime;
    unsigned int _blockEndTime;
    NSMutableArray *_blockCgis;
    NSMutableArray *_sceneLists;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int blockEndTime; // @synthesize blockEndTime=_blockEndTime;
@property(nonatomic) unsigned int blockBeginTime; // @synthesize blockBeginTime=_blockBeginTime;
@property(retain, nonatomic) NSMutableArray *sceneLists; // @synthesize sceneLists=_sceneLists;
@property(retain, nonatomic) NSMutableArray *blockCgis; // @synthesize blockCgis=_blockCgis;
- (id)description;

@end

