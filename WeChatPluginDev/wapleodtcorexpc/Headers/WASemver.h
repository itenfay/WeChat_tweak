//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSNumber, NSString;

@interface WASemver
{
    _Bool _isValid;
    NSString *_originalStr;
    NSNumber *_major;
    NSNumber *_minor;
    NSNumber *_patch;
    NSArray *_arrVersion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrVersion; // @synthesize arrVersion=_arrVersion;
@property(retain, nonatomic) NSNumber *patch; // @synthesize patch=_patch;
@property(retain, nonatomic) NSNumber *minor; // @synthesize minor=_minor;
@property(retain, nonatomic) NSNumber *major; // @synthesize major=_major;
@property(readonly, nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(readonly, nonatomic) NSString *originalStr; // @synthesize originalStr=_originalStr;
- (id)getExtrapolateVersion;
- (_Bool)isGreaterThan:(id)arg1;
- (_Bool)isLessThan:(id)arg1;
- (_Bool)isEqualTo:(id)arg1;
- (long long)compare:(id)arg1;
- (_Bool)isSatisfiedBy:(id)arg1;
- (_Bool)checkIsValid;
- (void)parse:(id)arg1;
- (id)initWithVersionStr:(id)arg1;

@end

