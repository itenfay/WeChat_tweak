//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTableViewCellCustomConfig, WCTableViewCellLeftConfig, WCTableViewCellRightConfig;

@interface WCTableViewCellNormalConfig
{
    _Bool _isLoading;
    _Bool _isSelectionMode;
    WCTableViewCellLeftConfig *_leftConfig;
    WCTableViewCellRightConfig *_rightConfig;
    WCTableViewCellCustomConfig *_customConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTableViewCellCustomConfig *customConfig; // @synthesize customConfig=_customConfig;
@property(retain, nonatomic) WCTableViewCellRightConfig *rightConfig; // @synthesize rightConfig=_rightConfig;
@property(retain, nonatomic) WCTableViewCellLeftConfig *leftConfig; // @synthesize leftConfig=_leftConfig;
@property(nonatomic) _Bool isSelectionMode; // @synthesize isSelectionMode=_isSelectionMode;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;

@end

