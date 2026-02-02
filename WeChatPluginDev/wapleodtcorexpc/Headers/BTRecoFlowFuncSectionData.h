//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BTRecoFlowFuncSectionData
{
    unsigned long long _funcType;
    NSString *_flowHeaderTitle;
    NSString *_hintTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *hintTitle; // @synthesize hintTitle=_hintTitle;
@property(retain, nonatomic) NSString *flowHeaderTitle; // @synthesize flowHeaderTitle=_flowHeaderTitle;
@property(nonatomic) unsigned long long funcType; // @synthesize funcType=_funcType;
- (id)identifierWithRow:(unsigned long long)arg1;
- (double)heightForSectionFooter;
- (long long)numberOfRowsInSection;
- (id)initWithFuncSectionType:(unsigned long long)arg1;

@end

