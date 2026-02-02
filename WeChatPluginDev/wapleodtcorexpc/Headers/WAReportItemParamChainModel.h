//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAReportBaseItem;

@interface WAReportItemParamChainModel
{
    WAReportBaseItem *_item;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WAReportBaseItem *item; // @synthesize item=_item;
@property(readonly, copy, nonatomic) CDUnknownBlockType appendInt;
@property(readonly, copy, nonatomic) CDUnknownBlockType appendUInt64;
@property(readonly, copy, nonatomic) CDUnknownBlockType appendUInt32;
@property(readonly, copy, nonatomic) CDUnknownBlockType appendString;
@property(readonly, nonatomic) NSString *toString;
@property(readonly, nonatomic) WAReportItemParamChainModel *reset;
- (id)initWithItem:(id)arg1;

@end

