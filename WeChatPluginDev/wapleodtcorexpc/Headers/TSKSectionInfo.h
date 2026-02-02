//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TSKSectionInfo
{
    _Bool _roleChanged;
    int _sentenceId;
    int _sentenceStartMs;
    int _sentenceEndMs;
    NSString *_role;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool roleChanged; // @synthesize roleChanged=_roleChanged;
@property(retain, nonatomic) NSString *role; // @synthesize role=_role;
@property(nonatomic) int sentenceEndMs; // @synthesize sentenceEndMs=_sentenceEndMs;
@property(nonatomic) int sentenceStartMs; // @synthesize sentenceStartMs=_sentenceStartMs;
@property(nonatomic) int sentenceId; // @synthesize sentenceId=_sentenceId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

