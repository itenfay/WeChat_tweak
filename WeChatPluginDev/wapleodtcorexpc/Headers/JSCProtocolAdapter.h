//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JSCScreencastSession, JSCTarget, NSMutableDictionary, NSString;

@interface JSCProtocolAdapter : NSObject
{
    JSCTarget *_target;
    NSMutableDictionary *_styleMap;
    _Bool _isEvaluating;
    NSString *_lastScriptEval;
    int _lastNodeId;
    int _lastPageExecutionContextId;
    id _lastReqID;
    id _lastConsoleMessage;
    JSCScreencastSession *_screencastSession;
}

- (void).cxx_destruct;
- (id)onScriptProfilerTrackingComplete:(id)arg1;
- (void)removeProfilesDeadLoop:(id)arg1 nodes:(id)arg2;
- (id)onProfilerStop:(id)arg1;
- (id)onHeapProfilerTakeHeapSnapshot:(id)arg1;
- (id)onInspectorInspect:(id)arg1;
- (id)onRuntimeGetProperties:(id)arg1;
- (id)onRuntimeEvaluate:(id)arg1;
- (id)onRuntimeExecutionContextCreated:(id)arg1;
- (id)onRuntimeCompileScript:(id)arg1;
- (id)onRuntimeEnable:(id)arg1;
- (id)onNetworkCanEmulateNetworkConditions:(id)arg1;
- (id)onConsoleMessageRepeatCountUpdated:(id)arg1;
- (id)onConsoleMessageAdded:(id)arg1;
- (id)onInputEmulateTouchFromMouseEvent:(id)arg1;
- (id)onEmulationCanEmulate:(id)arg1;
- (id)onDebuggerScriptParsed:(id)arg1;
- (id)onDebuggerEnable:(id)arg1;
- (id)onDebuggerSetAsyncCallStackDepth:(id)arg1;
- (id)onDebuggerSetBlackboxPatterns:(id)arg1;
- (id)onDebuggerCanSetScriptSource:(id)arg1;
- (id)onDOMDebuggerGetEventListeners:(id)arg1;
- (id)onDomGetNodeForLocation:(id)arg1;
- (id)onDomGetBoxModel:(id)arg1;
- (id)onDomPushNodesByBackendIdsToFrontend:(id)arg1;
- (id)onDomSetInspectMode:(id)arg1;
- (id)onDomEnable:(id)arg1;
- (id)onPageGetNavigationHistory:(id)arg1;
- (id)onPageScreencastFrameAck:(id)arg1;
- (id)onPageStopScreencast:(id)arg1;
- (id)onPageStartScreencast:(id)arg1;
- (id)onCssGetMatchedStylesForNodeResult:(id)arg1;
- (id)onCssGetPlatformFontsForNode:(id)arg1;
- (id)onCssAddRule:(id)arg1;
- (id)onCssGetBackgroundColors:(id)arg1;
- (id)onCssGetMatchedStylesForNode:(id)arg1;
- (id)onCssSetStyleTexts:(id)arg1;
- (id)onDomGetDocument;
- (void)initMessageFilters;
- (id)initWithTarget:(id)arg1;

@end

