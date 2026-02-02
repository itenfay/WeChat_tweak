//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMMusicVideoTransitionModel
{
    NSString *_transitionEffectId;
    NSString *_transitionName;
    NSString *_transitionPreviewPath;
    NSString *_transitionPagPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *transitionPagPath; // @synthesize transitionPagPath=_transitionPagPath;
@property(retain, nonatomic) NSString *transitionPreviewPath; // @synthesize transitionPreviewPath=_transitionPreviewPath;
@property(retain, nonatomic) NSString *transitionName; // @synthesize transitionName=_transitionName;
@property(retain, nonatomic) NSString *transitionEffectId; // @synthesize transitionEffectId=_transitionEffectId;
- (unsigned long long)toMVStatTransitionForReport;
- (_Bool)isValid;
- (id)description;

@end

