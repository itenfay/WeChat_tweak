//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, NSString, WCFinderComment, WCFinderCommentDetailTranslator;

@protocol WCFinderCommentDetailTranslatorDelegate <NSObject>
- (void)translator:(WCFinderCommentDetailTranslator *)arg1 receivedErrorMessage:(NSString *)arg2;
- (void)translator:(WCFinderCommentDetailTranslator *)arg1 commentsStatusChanged:(NSArray *)arg2 reloadRow:(_Bool)arg3;
- (WCFinderComment *)translator:(WCFinderCommentDetailTranslator *)arg1 commentForIndexPath:(NSIndexPath *)arg2;
- (NSArray *)allCommentSectionModelFortranslator:(WCFinderCommentDetailTranslator *)arg1;
@end

