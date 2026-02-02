//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FavoritesReportLogic : NSObject
{
    _Bool _bOnSearch;
    _Bool _needReport;
    _Bool _isForceToPortrait;
    _Bool _isSmallImage;
    _Bool _isNoteEditable;
    unsigned int _mainPageType;
    unsigned int _entranceScene;
    unsigned int _resultShowTime;
    unsigned int _searchTime;
    unsigned int _viewImageCount;
    NSArray *_selectedlocalPosition;
    NSString *_query;
    long long _filterType;
    NSString *_searchId;
    unsigned long long _localResultNum;
    long long _curOrientation;
    NSString *_curNoteSessionId;
    NSString *_noteId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNoteEditable; // @synthesize isNoteEditable=_isNoteEditable;
@property(nonatomic) unsigned int viewImageCount; // @synthesize viewImageCount=_viewImageCount;
@property(retain, nonatomic) NSString *noteId; // @synthesize noteId=_noteId;
@property(retain, nonatomic) NSString *curNoteSessionId; // @synthesize curNoteSessionId=_curNoteSessionId;
@property(nonatomic) unsigned int searchTime; // @synthesize searchTime=_searchTime;
@property(nonatomic) unsigned int resultShowTime; // @synthesize resultShowTime=_resultShowTime;
@property(nonatomic) _Bool isSmallImage; // @synthesize isSmallImage=_isSmallImage;
@property(nonatomic) _Bool isForceToPortrait; // @synthesize isForceToPortrait=_isForceToPortrait;
@property(nonatomic) long long curOrientation; // @synthesize curOrientation=_curOrientation;
@property(nonatomic) _Bool needReport; // @synthesize needReport=_needReport;
@property(nonatomic) unsigned long long localResultNum; // @synthesize localResultNum=_localResultNum;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSArray *selectedlocalPosition; // @synthesize selectedlocalPosition=_selectedlocalPosition;
@property(nonatomic) unsigned int entranceScene; // @synthesize entranceScene=_entranceScene;
@property(nonatomic) _Bool bOnSearch; // @synthesize bOnSearch=_bOnSearch;
@property(nonatomic) unsigned int mainPageType; // @synthesize mainPageType=_mainPageType;
- (void)reportFavoriteConflictWithClientItem:(id)arg1 serverItem:(id)arg2 reportType:(unsigned int)arg3;
- (void)reportTingGuideAction:(unsigned int)arg1;
- (void)report28587WithIsFromTitleBtn:(_Bool)arg1 result:(unsigned int)arg2;
- (void)reportNoteLandscape;
- (void)reportNoteContentSearchWithActionType:(unsigned int)arg1;
- (void)report27798WithTotalSize:(long long)arg1 favData:(id)arg2 msgIDOrFeedID:(id)arg3 actionType:(unsigned int)arg4 actionResult:(unsigned int)arg5 scene:(unsigned int)arg6;
- (void)reportWeNoteMenuOperation:(unsigned long long)arg1;
- (void)report14789:(unsigned long long)arg1 editable:(_Bool)arg2 translated:(_Bool)arg3 hasErrorDataType:(_Bool)arg4;
- (void)reportSaveNoteImageWidth:(unsigned long long)arg1 Height:(unsigned long long)arg2 Length:(unsigned long long)arg3 errorCode:(unsigned long long)arg4 Editable:(unsigned long long)arg5;
- (void)reportToolViewOperation:(unsigned long long)arg1 MediaType:(unsigned long long)arg2 favDetail:(id)arg3 count:(unsigned int)arg4;
- (void)reportToolViewOperation:(unsigned long long)arg1 MediaType:(unsigned long long)arg2;
- (void)reportAddFavOperation:(unsigned int)arg1 favItemList:(id)arg2 selectedCount:(unsigned int)arg3;
- (void)reportToolViewOperation:(unsigned long long)arg1;
- (void)onCloseNote;
- (void)increaseImageShowCount;
- (void)onOpenNoteWithMessage:(id)arg1 WCDataItem:(id)arg2 FavItem:(id)arg3;
- (void)report24562:(int)arg1 action:(int)arg2 clickNum:(int)arg3;
- (void)report19856:(id)arg1;
- (void)report17105:(id)arg1 DeletType:(int)arg2 PageType:(int)arg3 ContainRecord:(_Bool)arg4 ShowContext:(_Bool)arg5;
- (void)report10651WithFavItem:(id)arg1 DataWrap:(id)arg2 toContact:(id)arg3 toFriend:(_Bool)arg4 isFromSession:(_Bool)arg5;
- (void)report10651WithFavItem:(id)arg1 DataWrap:(id)arg2 toContact:(id)arg3 toFriend:(_Bool)arg4;
- (void)report15508:(id)arg1;
- (void)report15378:(id)arg1;
- (void)report15098:(id)arg1;
- (void)convertFavEntranceScene:(unsigned int)arg1 toEntranceScene:(unsigned int *)arg2 toEntranceSearchScene:(unsigned int *)arg3;
- (void)reportBatchEditTagOpt:(int)arg1 isSuccess:(int)arg2 oldTag:(id)arg3 newTag:(id)arg4;
- (void)report14790:(unsigned long long)arg1 onTop:(_Bool)arg2;
- (void)report14110:(unsigned long long)arg1 deleteItemNum:(unsigned long long)arg2 deleteTotalSize:(long long)arg3;
- (void)report14109:(unsigned long long)arg1;
- (void)report14103:(unsigned long long)arg1;
- (void)report15488:(unsigned long long)arg1;
- (void)endSearch;
- (void)startSearch;

@end

