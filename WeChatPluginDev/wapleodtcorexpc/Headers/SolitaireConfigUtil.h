//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface SolitaireConfigUtil : NSObject
{
}

+ (_Bool)isForbidUseOriginTitle;
+ (_Bool)isForceUseCTagWithEmoji;
+ (_Bool)isCloseTextFold;
+ (_Bool)isCloseOnelineRecognize;
+ (_Bool)isCloseAddSolitairePrefix;
+ (_Bool)isCloseKeywordCallTips;
+ (_Bool)isJustSeparateContentToTwoForOnelineEdit;
+ (long long)getSolitaireBecomeActiveCount;
+ (long long)getSolitaireFirstMatchLimit;
+ (long long)getSolitaireMatchMaxCount;
+ (long long)getSolitaireMatchMaxDuration;
+ (long long)getSolitaireActiveMaxCount;
+ (long long)getSolitaireActiveMaxDuration;
+ (id)getSolitaireOccupyKeywordRegex;
+ (id)getSolitaireKeywordENRegex;
+ (id)getSolitaireKeywordCNRegex;
+ (id)getSolitaireExampleRegex;
+ (id)getSolitaireNumRegex;
+ (id)getSolitaireContentSeparateRegex;
+ (id)getSolitaireContentRegex;
+ (id)getAppCallKeywordRegex;
+ (long long)getSolitaireContentMaxCount;
+ (int)getSolitaireTitleMaxWordCount;
+ (int)getSolitaireItemMaxWordCount;
+ (_Bool)isOpenDetectEditOther;
+ (_Bool)isOpenDeleteSameTitle;
+ (_Bool)isOpenMsgKeywordDetection;
+ (_Bool)isOpenKeywordDetection;
+ (_Bool)isOpenSolitaireAttachmentEntry;
+ (_Bool)isSolitaireOpenAnalysis;
+ (_Bool)isSolitaireOpenEntry;
+ (id)getConfig;

@end

