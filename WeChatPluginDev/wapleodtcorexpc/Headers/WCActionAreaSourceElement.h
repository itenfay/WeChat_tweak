//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCActionAreaSourceElement
{
    unsigned long long _sourceShowType;
    NSString *_sourceText;
    NSString *_sourceUrl;
    NSString *_sourceBackupUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sourceBackupUrl; // @synthesize sourceBackupUrl=_sourceBackupUrl;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(retain, nonatomic) NSString *sourceText; // @synthesize sourceText=_sourceText;
@property(nonatomic) unsigned long long sourceShowType; // @synthesize sourceShowType=_sourceShowType;
- (id)hashString;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

