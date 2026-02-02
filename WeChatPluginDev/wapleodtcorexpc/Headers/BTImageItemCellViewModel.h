//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface BTImageItemCellViewModel
{
    NSArray *_picUrls;
}

+ (_Bool)canCreateViewModelWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *picUrls; // @synthesize picUrls=_picUrls;
- (unsigned long long)picNum;
@property(readonly, nonatomic) NSString *digestStr;
- (id)friendsReadStr;
- (unsigned long long)digestLineNumber;
- (double)titleMaxWidth;
- (double)viewHeight;
- (id)itemViewClassName;

@end

