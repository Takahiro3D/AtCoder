#include <bits/stdc++.h>
using namespace std;

{% if mod %}
const long long MOD = {{ mod }};
{% endif %}
{% if yes_str %}
const string YES = "{{ yes_str }}";
{% endif %}
{% if no_str %}
const string NO = "{{ no_str }}";
{% endif %}

{% if prediction_success %}
void solve({{ formal_arguments }}){

}
{% endif %}

// Generated by {{ atcodertools.version }} {{ atcodertools.url }}  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
  {% if prediction_success %}
  {{input_part}}
  solve({{ actual_arguments }});
  {% else %}
  // Failed to predict input format
  {% endif %}
  return 0;
}
